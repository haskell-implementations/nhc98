include Makefile.inc

.SUFFIXES: .lhs .java .class 

XMLLIB = com/microstar/xml
CPP = gcc -E -P -undef -traditional
JAVAC = javac
JAVADOC = javadoc

ARCHIVE = hood.jar

JAVA_SRC = 			\
	Message.java		\
	HoodColl.java		\
	HoodSet.java		\
	HoodBag.java		\
	HoodVector.java		\
	HoodText.java		\
	Pretty.java		\
	PrettyNest.java		\
	PrettyNL.java		\
	PrettyText.java		\
	PrettyShadow.java	\
	PrettyMany.java		\
	PrettyGroup.java	\
	PrettyContext.java	\
	PrettyContentWidget.java	\
	PrettyDisplayText.java  \
	PrettyCommand.java	\
	CDS.java		\
	CDSUnknown.java		\
	CDSEnter.java		\
	CDSCons.java		\
	CDSFun.java		\
	CDSMany.java		\
	ArgResList.java		\
	AllCDS.java		\
	XmlObsHandler.java	\
	HoodTopLevel.java	\
	HoodViewer.java		\
	Hood.java		\
	HoodApplet.java

JAVA_CLASSES = $(JAVA_SRC:%.java=%.class)
XML_CLASSES = $(XMLLIB)/XmlHandler.class $(XMLLIB)/XmlParser.class
BINARIES = $(JAVA_CLASSES) $(XML_CLASSES)

all: ${ARCHIVE}
	${INSTALL} ${ARCHIVE} ${LIBDIR}
${ARCHIVE}: ${BINARIES}
	jar cf ${ARCHIVE} *.class com/microstar/xml/*.class
classfiles:
	javac -source 1.4 *.java

doc::
	javadoc $(JAVA_SRC) -d ../doc
wc::
	wc $(JAVA_SRC)
clean::
	rm -f ${ARCHIVE} ${BINARIES}

%.class: %.java
	javac -source 1.4 $< 

#
# Crude compilation support for the xml.microstar.com package.
#

$(XMLLIB)/XmlHandler.class: $(XMLLIB)/XmlHandler.java
	( cd $(XMLLIB) ; $(JAVAC) -source 1.4 XmlHandler.java XmlParser.java )

$(XMLLIB)/XmlParser.class: $(XMLLIB)/XmlParser.java
	( cd $(XMLLIB) ; $(JAVAC) -source 1.4 XmlHandler.java XmlParser.java )

