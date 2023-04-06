QT -= gui
QT += core

CONFIG += c++11 c++14 c++17 console
CONFIG -= app_bundle


# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
HEADERS += \
   # road.grpc.pb.h \
   # road.pb.h\
   helloworld.grpc.pb.h \
   helloworld.pb.h \
   bisa.h

SOURCES += \
   helloworld.grpc.pb.cc \
   helloworld.pb.cc \
    bisa.cpp \
   # road.grpc.pb.cc \
   # road.pb.cc \
    main.cpp


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

#//-------------------------------------------------//

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/ -lgrpc++
#INCLUDEPATH += $$PWD/../../grpc/grpc/include
#DEPENDPATH += $$PWD/../../grpc/grpc/include
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/libgrpc++.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/protobuf/ -lprotobuf
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/protobuf/src
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/protobuf/src
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/protobuf/libprotobuf.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/ -lgpr
#INCLUDEPATH += $$PWD/../../grpc/grpc/include
#DEPENDPATH += $$PWD/../../grpc/grpc/include
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/libgpr.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/ -lgrpc
#INCLUDEPATH += $$PWD/../../grpc/grpc/include
#DEPENDPATH += $$PWD/../../grpc/grpc/include
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/libgrpc.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/ -lgrpc++_reflection
#INCLUDEPATH += $$PWD/../../grpc/grpc/include
#DEPENDPATH += $$PWD/../../grpc/grpc/include
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/libgrpc++_reflection.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/ -lgrpc++_alts
#INCLUDEPATH += $$PWD/../../grpc/grpc/include
#DEPENDPATH += $$PWD/../../grpc/grpc/include
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/libgrpc++_alts.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/zlib/ -lz
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/zlib
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/zlib

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/synchronization/ -labsl_synchronization
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/synchronization
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/synchronization
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/synchronization/libabsl_synchronization.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/synchronization/ -labsl_graphcycles_internal
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/synchronization
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/synchronization
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/synchronization/libabsl_graphcycles_internal.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/ -labsl_base
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/libabsl_base.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/ -labsl_log_severity
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/libabsl_log_severity.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/ -labsl_malloc_internal
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/libabsl_malloc_internal.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/ -labsl_raw_logging_internal
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/libabsl_raw_logging_internal.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/ -labsl_scoped_set_env
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/libabsl_scoped_set_env.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/ -labsl_spinlock_wait
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/libabsl_spinlock_wait.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/ -labsl_strerror
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/libabsl_strerror.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/ -labsl_throw_delegate
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/libabsl_throw_delegate.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/container/ -labsl_hashtablez_sampler
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/container
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/container
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/container/libabsl_hashtablez_sampler.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/container/ -labsl_raw_hash_set
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/container
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/container
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/container/libabsl_raw_hash_set.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/ -labsl_base
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/libabsl_base.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/ -labsl_log_severity
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/libabsl_log_severity.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/ -labsl_malloc_internal
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/libabsl_malloc_internal.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/ -labsl_raw_logging_internal
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/libabsl_raw_logging_internal.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/ -labsl_spinlock_wait
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/libabsl_spinlock_wait.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/ -labsl_scoped_set_env
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/libabsl_scoped_set_env.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/ -labsl_strerror
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/libabsl_strerror.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/ -labsl_throw_delegate
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/base/libabsl_throw_delegate.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/crc/ -labsl_crc32c
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/crc
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/crc
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/crc/libabsl_crc32c.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/crc/ -labsl_crc_cord_state
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/crc
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/crc
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/crc/libabsl_crc_cord_state.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/crc/ -labsl_crc_cpu_detect
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/crc
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/crc
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/crc/libabsl_crc_cpu_detect.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/crc/ -labsl_crc_internal
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/crc
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/crc
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/crc/libabsl_crc_internal.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags/ -labsl_flags
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags/libabsl_flags.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags/ -labsl_flags_commandlineflag
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags/libabsl_flags_commandlineflag.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags/ -labsl_flags_commandlineflag
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags/libabsl_flags_commandlineflag.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags/ -labsl_flags_commandlineflag_internal
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags/libabsl_flags_commandlineflag_internal.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags/ -labsl_flags_config
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags/libabsl_flags_config.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags/ -labsl_flags_internal
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags/libabsl_flags_internal.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags/ -labsl_flags_marshalling
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags/libabsl_flags_marshalling.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags/ -labsl_flags_parse
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags/libabsl_flags_parse.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags/ -labsl_flags_private_handle_accessor
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags/libabsl_flags_private_handle_accessor.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags/ -labsl_flags_program_name
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags/libabsl_flags_program_name.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags/ -labsl_flags_reflection
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags/libabsl_flags_reflection.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags/ -labsl_flags_usage
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags/libabsl_flags_usage.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags/ -labsl_flags_usage_internal
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/flags/libabsl_flags_usage_internal.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/hash/ -labsl_city
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/hash
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/hash
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/hash/libabsl_city.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/hash/ -labsl_hash
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/hash
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/hash
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/hash/libabsl_hash.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/hash/ -labsl_low_level_hash
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/hash
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/hash
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/hash/libabsl_low_level_hash.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log/ -labsl_die_if_null
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log/libabsl_die_if_null.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log/ -labsl_log_entry
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log/libabsl_log_entry.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log/ -labsl_log_flags
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log/libabsl_log_flags.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log/ -labsl_log_globals
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log/libabsl_log_globals.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log/ -labsl_log_initialize
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log/libabsl_log_initialize.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log/ -labsl_log_internal_check_op
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log/libabsl_log_internal_check_op.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log/ -labsl_log_internal_conditions
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log/libabsl_log_internal_conditions.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log/ -labsl_log_internal_format
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log/libabsl_log_internal_format.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log/ -labsl_log_internal_globals
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log/libabsl_log_internal_globals.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log/ -labsl_log_internal_log_sink_set
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log/libabsl_log_internal_log_sink_set.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log/ -labsl_log_internal_message
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log/libabsl_log_internal_message.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log/ -labsl_log_internal_nullguard
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log/libabsl_log_internal_nullguard.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log/ -labsl_log_internal_proto
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log/libabsl_log_internal_proto.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log/ -labsl_log_sink
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/log/libabsl_log_sink.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/profiling/ -labsl_exponential_biased
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/profiling
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/profiling
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/profiling/libabsl_exponential_biased.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/profiling/ -labsl_periodic_sampler
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/profiling
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/profiling
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/profiling/libabsl_periodic_sampler.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random/ -labsl_random_distributions
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random/libabsl_random_distributions.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random/ -labsl_random_internal_distribution_test_util
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random/libabsl_random_internal_distribution_test_util.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random/ -labsl_random_internal_platform
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random/libabsl_random_internal_platform.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random/ -labsl_random_internal_platform
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random/libabsl_random_internal_platform.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random/ -labsl_random_internal_pool_urbg
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random/libabsl_random_internal_pool_urbg.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random/ -labsl_random_internal_randen
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random/libabsl_random_internal_randen.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random/ -labsl_random_internal_randen_hwaes
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random/libabsl_random_internal_randen_hwaes.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random/ -labsl_random_internal_randen_hwaes_impl
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random/libabsl_random_internal_randen_hwaes_impl.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random/ -labsl_random_internal_randen_slow
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random/libabsl_random_internal_randen_slow.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random/ -labsl_random_internal_seed_material
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random/libabsl_random_internal_seed_material.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random/ -labsl_random_seed_gen_exception
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random/libabsl_random_seed_gen_exception.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random/ -labsl_random_seed_sequences
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/random/libabsl_random_seed_sequences.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/status/ -labsl_status
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/status
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/status
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/status/libabsl_status.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/status/ -labsl_statusor
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/status
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/status
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/status/libabsl_statusor.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings/ -labsl_cord
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings/libabsl_cord.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings/ -labsl_cord_internal
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings/libabsl_cord_internal.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings/ -labsl_cordz_functions
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings/libabsl_cordz_functions.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings/ -labsl_cordz_handle
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings/libabsl_cordz_handle.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings/ -labsl_cordz_info
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings/libabsl_cordz_info.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings/ -labsl_cordz_sample_token
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings/libabsl_cordz_sample_token.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings/ -labsl_str_format_internal
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings/libabsl_str_format_internal.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings/ -labsl_strings
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings/libabsl_strings.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings/ -labsl_strings_internal
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/strings/libabsl_strings_internal.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/time/ -labsl_civil_time
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/time
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/time
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/time/libabsl_civil_time.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/time/ -labsl_time
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/time
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/time
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/time/libabsl_time.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/time/ -labsl_time_zone
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/time
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/time
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/time/libabsl_time_zone.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/types/ -labsl_bad_any_cast_impl
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/types
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/types
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/types/libabsl_bad_any_cast_impl.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/types/ -labsl_bad_optional_access
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/types
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/types
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/types/libabsl_bad_optional_access.a

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/types/ -labsl_bad_variant_access
#INCLUDEPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/types
#DEPENDPATH += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/types
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../grpc/grpc/third_party/abseil-cpp/absl/types/libabsl_bad_variant_access.a

##unix:!macx: LIBS += -L$$PWD/../../../../../../usr/lib/x86_64-linux-gnu/ -lthread_db
##INCLUDEPATH += $$PWD/../../../../../../usr/include/x86_64-linux-gnu
##DEPENDPATH += $$PWD/../../../../../../usr/include/x86_64-linux-gnu

##//----------------------------------------------------------------------------------------------//

#unix:!macx: LIBS += -L$$PWD/../../../../../../usr/local/lib/ -lprotobuf
#INCLUDEPATH += $$PWD/../../../../../../usr/local/include
#DEPENDPATH += $$PWD/../../../../../../usr/local/include
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../../../../../usr/local/lib/libprotobuf.a

#unix:!macx: LIBS += -L$$PWD/../../../../../../lib/ -lgrpc++
#INCLUDEPATH += $$PWD/../../../../../../include
#DEPENDPATH += $$PWD/../../../../../../include
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../../../../../lib/libgrpc++.a

#unix:!macx: LIBS += -L$$PWD/../../../../../../usr/local/lib/ -lz
#INCLUDEPATH += $$PWD/../../../../../../usr/local/include
#DEPENDPATH += $$PWD/../../../../../../usr/local/include
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../../../../../usr/local/lib/libz.a

#unix:!macx: LIBS += -L$$PWD/../../../../../../usr/lib/ -lgrpc
#INCLUDEPATH += $$PWD/../../../../../../usr/include
#DEPENDPATH += $$PWD/../../../../../../usr/include
#unix:!macx: PRE_TARGETDEPS += $$PWD/../../../../../../usr/lib/libgrpc.a

##/-------------------------------------------------------------------------------------------------//

unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/lib/ -lre2 -lcares -lcrypto  -lssl -lupb -lz \
-labsl_bad_any_cast_impl -labsl_bad_optional_access -labsl_bad_variant_access -labsl_base -labsl_city -labsl_civil_time -labsl_cord -labsl_cord_internal \
-labsl_cordz_functions -labsl_cordz_handle -labsl_cordz_info -labsl_cordz_sample_token -labsl_crc32c -labsl_crc_cord_state -labsl_crc_cpu_detect \
-labsl_crc_internal -labsl_debugging_internal -labsl_demangle_internal -labsl_die_if_null -labsl_examine_stack -labsl_exponential_biased -labsl_failure_signal_handler \
-labsl_flags -labsl_flags_commandlineflag -labsl_flags_commandlineflag_internal -labsl_flags_config -labsl_flags_internal -labsl_flags_marshalling -labsl_flags_parse \
-labsl_flags_private_handle_accessor -labsl_flags_program_name -labsl_flags_reflection -labsl_flags_usage -labsl_flags_usage_internal -labsl_graphcycles_internal \
-labsl_hash -labsl_hashtablez_sampler -labsl_int128 -labsl_leak_check -labsl_log_entry -labsl_log_flags -labsl_log_globals -labsl_log_initialize \
-labsl_log_internal_check_op -labsl_log_internal_conditions -labsl_log_internal_format -labsl_log_internal_globals -labsl_log_internal_log_sink_set \
-labsl_log_internal_message -labsl_log_severity -labsl_log_internal_proto -labsl_log_internal_nullguard \
-laddress_sorting -labsl_time_zone -labsl_time -labsl_throw_delegate -labsl_synchronization -labsl_symbolize -labsl_strings_internal -labsl_strings \
-labsl_str_format_internal -labsl_strerror -labsl_statusor -labsl_status -labsl_spinlock_wait -labsl_scoped_set_env -labsl_raw_logging_internal \
-labsl_raw_hash_set -labsl_random_seed_sequences -labsl_random_seed_gen_exception -labsl_random_internal_seed_material -labsl_random_internal_randen_slow \
-labsl_random_internal_randen_hwaes_impl -labsl_random_internal_randen_hwaes -labsl_random_internal_randen -labsl_random_internal_pool_urbg -labsl_random_internal_platform \
-labsl_random_distributions -labsl_random_internal_distribution_test_util -labsl_periodic_sampler -labsl_malloc_internal -labsl_low_level_hash -labsl_log_sink

INCLUDEPATH += $$PWD/../../grpc/grpc/include
DEPENDPATH += $$PWD/../../grpc/grpc/include

##
#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/ -lgrpc -lgrpc++ -lgpr -lgrpc++_alts -lgrpc_authorization_provider \
#-lgrpc++_error_details -lgrpc_plugin_support -lgrpc++_reflection -lgrpc++_unsecure -lgrpc_unsecure \
#-lprotobuf-lite -lprotoc -lprotobuf

#INCLUDEPATH += $$PWD/../../grpc/grpc/include
#DEPENDPATH += $$PWD/../../grpc/grpc/include

#unix:!macx: LIBS += -L$$PWD/../../grpc/grpc/ -lupb -lgrpc -lgrpc++ -lgpr -lgrpc++_alts -lgrpc_authorization_provider \
#-lgrpc++_error_details -lgrpc_plugin_support -lgrpc++_reflection -lgrpc++_unsecure -lgrpc_unsecure \
#-lprotobuf-lite -lprotoc -lprotobuf

#INCLUDEPATH += $$PWD/../../grpc/grpc
#DEPENDPATH += $$PWD/../../grpc/grpc



unix:!macx: LIBS += -L$$PWD/../../../../../../usr/local/lib/ -lupb -lgrpc -lgrpc++ -lgpr -lgrpc++_alts -lgrpc_authorization_provider \
-lgrpc++_error_details -lgrpc_plugin_support -lgrpc++_reflection -lgrpc++_unsecure -lgrpc_unsecure \
-lprotobuf-lite -lprotoc -lprotobuf
INCLUDEPATH += $$PWD/../../../../../../usr/local/include
DEPENDPATH += $$PWD/../../../../../../usr/local/include
