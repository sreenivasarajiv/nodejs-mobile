#ifndef SRC_NODE_MOBILE_VERSION_H_
#define SRC_NODE_MOBILE_VERSION_H_

#include "node_version.h"

#define NODE_MOBILE_MAJOR_VERSION 0
#define NODE_MOBILE_MINOR_VERSION 1
#define NODE_MOBILE_PATCH_VERSION 6

#define NODE_MOBILE_VERSION_IS_RELEASE 1

# if NODE_MOBILE_VERSION_IS_RELEASE
#  define NODE_MOBILE_TAG ""
# else
#  define NODE_MOBILE_TAG "-pre"
# endif

#define NODE_MOBILE_VERSION  NODE_STRINGIFY(NODE_MOBILE_MAJOR_VERSION) "." \
                               NODE_STRINGIFY(NODE_MOBILE_MINOR_VERSION) "." \
                               NODE_STRINGIFY(NODE_MOBILE_PATCH_VERSION)     \
                               NODE_MOBILE_TAG

#endif  // SRC_NODE_MOBILE_VERSION_H_
