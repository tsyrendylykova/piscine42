grep -i "\(^\||s\)nicolas\s" $1 | grep -i "bauer\s" | tr '\t' '\n' | grep "-"
