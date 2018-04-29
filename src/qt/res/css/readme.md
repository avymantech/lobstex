# Change the Qt style

## How to change the global style

The global style is in default.tpl.css, and preprocessed by preprocess.pl.
To change the global style,
1. Edit preprocess.pl.
2. Edit the values in %styleMap.
3. Execute preprocess.pl. ```preprocess.pl``` or ```perl preprocess.pl```.
4. Build the project.

## How to add an entry in global style

1. Find the value in default.tpl.css to be replaced.
2. Add an entry in %styleMap in preprocess.pl. Note the entry key is a Perl regular expression.
3. Replace the values in default.tpl.css with the entry key. Note, not the same values have the same meaning or usage, only replace the values under the same usage.

## Warning: don't modify default.css, modify preprocess.pl and default.tpl.css instead
