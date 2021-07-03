export data_dir=`pwd`/DemoDir
rm -rf ${data_dir}
mkdir ${data_dir}
./bin/initdb -D ${data_dir}