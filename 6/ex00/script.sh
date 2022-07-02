#!/bin/sh
lower=$class
upper=$class | tr '[:lower:]' '[:upper:]'
echo "#ifndef ${upper}_HPP\n# define ${upper}_HPP\n\n# include \n\nclass\
 ${lower^}\n{\n\private:\n\n${lower^}(void);\n" >> ${lower}.hpp