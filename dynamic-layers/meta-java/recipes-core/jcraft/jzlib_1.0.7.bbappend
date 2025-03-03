# Workaround for fetching the jzlib sources when the JCraft website is down - overwrite
# the SRC_URI variable to point to a git repository.
SRC_URI = "git://github.com/joshbeitelspacher/jzlib;protocol=https;branch=master"
SRCREV = "f8671d8f27c09f9a86a9cb4f431687a02eca5b29"

S = "${WORKDIR}/git"
