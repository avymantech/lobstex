![Logo](https://i.imgur.com/iv5Zdek.png)
# Lobstex Masternode Setup Guide  For MAC (Ubuntu 16.04)
This guide will assist you in setting up a Lobstex Masternode on a Linux Server running Ubuntu 16.04. (Use at your own risk)

If you require further assistance contact the support team @ [Discord](https://discord.gg/BDbgFhQ)
***
## Requirements
1) **10,000 Lobstex coins.**
2) **A Vultr VPS running Linux Ubuntu 16.04.**
3) **A Mac Local wallet.**
4) **An SSH client such as Terminal
***
## Contents
* **Section A**: Creating the VPS within [Vultr](https://www.vultr.com/?ref=7330204).
* **Section B**: Using Terminal for Mac.
* **Section C**: Connecting to the VPS and installing the MN script via Terminal.
* **Section D**: Preparing the local wallet.
* **Section E**: Connecting & Starting the masternode.
***

## Section A: Creating the VPS within [Vultr](https://www.vultr.com/?ref=7296974) 
***Step 1***
* Register at [Vultr](https://www.vultr.com/?ref=7296974)
***

***Step 2***
* After you have added funds to your account go [here](https://my.vultr.com/deploy/) to create your Server
***

***Step 3*** 
* Choose a server location (preferably somewhere close to you)
![Example-Location](https://i.imgur.com/ozi7Bkr.png)
***

***Step 4***
* Choose a server type: Ubuntu 16.04
![Example-OS](https://i.imgur.com/aSMqHUK.png)
***

***Step 5***
* Choose a server size: $5/mo will be fine 
![Example-OS](https://i.imgur.com/UoGoHcM.png)
***

***Step 6*** 
* Set a Server Hostname & Label (name it whatever you want)
![Example-hostname](https://i.imgur.com/NtualgA.png)
***

***Step 7***
* Click "Deploy now"

![Example-Deploy](https://i.imgur.com/4qpYuH0.png)
***


## Section B: Using Terminal for Mac to connect to VPS. 

***Step 1***
* Open Terminal. 
![Example-PuttyInstaller](https://i.imgur.com/hDEkM2Y.png)
***

## Section C: Connecting to the VPS & Installing the MN script via Terminal

***Step 1***
* Use command ssh root@ VPS IP (you can find this by going to the server tab within Vultr and clicking on your server. 
![Example-Vultr](https://i.imgur.com/PZWEq5f.png)
***


***Step 2*** 
* Copy and Paste your Vultr password into Terminal.  
***


***Step 3** 
* Paste the password into the terminal by right clicking (it will not show the password so just press enter)
![Example-RootPassEnter](https://i.imgur.com/1iDNVCW.png)
***

***Step 4**
* Paste the code below into the terminal then press enter (it will just go to a new line)

`wget -q https://raw.githubusercontent.com/Realbityoda/Lobstex/master/lobstex_install.sh`
***

***Step 5**
* Paste the code below into the putty terminal then press enter

`bash lobstex_install.sh`

![Example-Bash](https://i.imgur.com/gAnMfxy.png)

***

***Step 6**
* Sit back and wait for the install (this will take 10-20 mins)
***

***Step 7**
* When prompted to enter your GEN key - press enter

![Example-installing](https://i.imgur.com/8ZAjIEx.png)
***

***Step 8**
* You will now see all of the relavant information for your server.
* Keep this terminal open as we will need the info for the wallet setup.
![Example-installing](https://i.imgur.com/Q87LcnW.png)
***

## Section D: Preparing the Local wallet

***Step 1***
* Download and install the lobstex wallet [here](https://github.com/avymantech/lobstex/releases/tag/v1.0)
***

***Step 2***
* Send EXACLY 10000 LOBS to a receive address within your wallet.
***

***Step 3***
* Create a text document to temporarily store information that you will need. 
***

***step 4***
* Go to the console within the wallet 

![Example-console](https://i.imgur.com/6NM7G9a.png)
***

***Step 5***
* Type the command below and press enter 

`masternode outputs` 

![Example-outputs](https://i.imgur.com/GD7Ro1m.png)
***

***Step 6***
* Copy the long key (this is your transaction ID) and the 0 or 1 at the end (this is your output index)
* Paste these into the text document you created earlier as you will need them in the next step.
***

# Section E: Connecting & Starting the masternode 

***Step 1***
* Go to the tools tab within the wallet and click open "masternode configuration file" 
![Example-create](https://i.imgur.com/COsfvfA.png)
***

***Step 2***

* Fill in the form. 
* For `Alias` type something like "MN01" **don't use spaces**
* The `Address` is the IP and port of your server (this will be in the Bitvise terminal that you still have open).
* The `PrivKey` is your masternode private key (This is also in the Bitvise terminal that you have open).
* The `TxHash` is the transaction ID/long key that you copied to the text file.
* The `Output Index` is the 0 or 1 that you copied to your text file.
![Example-create](https://i.imgur.com/9b1I3bk.png)

Click "File Save"
***

***Step 3***
* Close out of the wallet and reopen Wallet
*Click on the Masternodes tab "My masternodes"
* Click start all in the masternodes tab
***

***step 4***
* Check the status of your masternode within the VPS by using the command below:

`lobstex-cli masternode status`

`lobstex-cli getinfo`

*You should see ***status 9***

If you do, congratulations! You have now setup a masternode. If you do not, please contact support and they will assist you.  
***
