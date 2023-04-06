# QTgrpc
ketika proses compile perlu diperhatikan file output library nya, std=c++11


cmake -std=c++11 -DBUILD_SHARED_LIBS=ON -DCMAKE_BUILD_TYPE=Release -DgRPC_INSTALL=ON -DgRPC_BUILD_TESTS=OFF -DgRPC_ABSL_PROVIDER=module -DgRPC_CARES_PROVIDER=module -DgRPC_PROTOBUF_PROVIDER=module -DgRPC_RE2_PROVIDER=module -DgRPC_SSL_PROVIDER=module -DgRPC_ZLIB_PROVIDER=module
-DCMAKE_INSTALL_PREFIX=/
