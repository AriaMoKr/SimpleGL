LDLIBS = -lGL -lglut

ALL: hello nothing trianglecolor triangle trianglemovebutton trianglerotate trianglerotatekeyboard trianglerotatemouse

.PHONY: clean

clean:
	-rm -f hello nothing trianglecolor triangle trianglemovebutton trianglerotate trianglerotatekeyboard trianglerotatemouse

