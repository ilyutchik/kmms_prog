MAIN=main
EXE=example
BIN_DIR=bin

CPP_FILES="io.cpp sortings.cpp main.cpp"

if [ ! -d $BIN_DIR ]; then mkdir $BIN_DIR
fi

if [ -f $BIN_DIR/$EXE ]; then rm $BIN_DIR/$EXE
fi

g++ $CHARSET $CPP_FILES -o "$BIN_DIR/$EXE" || exit 1

./$BIN_DIR/$EXE


