// Copyright (c) 2011-2014 The Bitcoin developers
// Copyright (c) 2014-2015 The Dash developers
// Copyright (c) 2015-2017 The PIVX developers	
// Copyright (c) 2019 The Lobstex developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_GUICONSTANTS_H
#define BITCOIN_QT_GUICONSTANTS_H

/* Milliseconds between model updates */
static const int MODEL_UPDATE_DELAY = 250;

/* AskPassphraseDialog -- Maximum passphrase length */
static const int MAX_PASSPHRASE_SIZE = 1024;

/* Lobstex GUI -- Size of icons in status bar */
static const int STATUSBAR_ICONSIZE = 16;

static const bool DEFAULT_SPLASHSCREEN = true;

/* Invalid field background style */
#define STYLE_INVALID "background:#aa1212"

/* Transaction list -- unconfirmed transaction */
#define COLOR_UNCONFIRMED QColor(198, 83, 15)
/* Transaction list -- negative amount */
#define COLOR_NEGATIVE QColor(183, 111, 11)
/* Transaction list -- bare address (without label) */
#define COLOR_BAREADDRESS QColor(33, 32, 32)
/* Transaction list -- TX status decoration - open until date */
#define COLOR_TX_STATUS_OPENUNTILDATE QColor(30, 30, 122)
/* Transaction list -- TX status decoration - offline */
#define COLOR_TX_STATUS_OFFLINE QColor(96, 54, 54)
/* Transaction list -- TX status decoration - default color */
#define COLOR_BLACK QColor(33, 32, 32)
/* Transaction list -- TX status decoration - conflicted */
#define COLOR_CONFLICTED QColor(153, 12, 12)

/* Tooltips longer than this (in characters) are converted into rich text,
   so that they can be word-wrapped.
 */
static const int TOOLTIP_WRAP_THRESHOLD = 80;

/* Maximum allowed URI length */
static const int MAX_URI_LENGTH = 255;

/* QRCodeDialog -- size of exported QR Code image */
#define EXPORT_IMAGE_SIZE 256

/* Number of frames in spinner animation */
#define SPINNER_FRAMES 35

#define QAPP_ORG_NAME "Lobstex"
#define QAPP_ORG_DOMAIN "lobstex.org"
#define QAPP_APP_NAME_DEFAULT "Lobstex-Qt"
#define QAPP_APP_NAME_TESTNET "Lobstex-Qt-testnet"

#endif // BITCOIN_QT_GUICONSTANTS_H
