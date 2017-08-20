rm -rf IL2CPP
mkdir IL2CPP
cp Temp/il2cppOutput/il2cppOutput/Bulk_Assembly-CSharp_0.cpp IL2CPP/Assembly-CSharp.cpp
find Temp/il2cppOutput/il2cppOutput/ -name "AssemblyU2DCSharp_*" -exec cp {} IL2CPP \;
