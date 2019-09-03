find . -iname '*.sh' -execdir sh -c 'printf "%s\n" "${0%.*}"' {} ';'
