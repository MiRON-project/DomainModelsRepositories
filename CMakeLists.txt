CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

FIND_FILE(SMART_MACROS SmartMacros2.cmake PATHS $ENV{SMART_ROOT_ACE}/CMakeMacros /opt/smartSoftAce/CMakeMacros)
INCLUDE(${SMART_MACROS})

SMART_ADD_PACKAGE(CommBasicObjects)
SMART_ADD_PACKAGE(CommLocalizationObjects)
SMART_ADD_PACKAGE(CommNavigationObjects)
SMART_ADD_PACKAGE(CommObjectRecognitionObjects)
SMART_ADD_PACKAGE(CommRobotinoObjects)
SMART_ADD_PACKAGE(CommTrackingObjects)
SMART_ADD_PACKAGE(CommRoqmeEstimate)
SMART_ADD_PACKAGE(DomainVision)
SMART_ADD_PACKAGE(DomainSpeech)
