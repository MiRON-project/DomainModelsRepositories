################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../smartsoft/src/CommRoqmeEstimate/RoqmeEstimate.cc 

CC_DEPS += \
./smartsoft/src/CommRoqmeEstimate/RoqmeEstimate.d 

OBJS += \
./smartsoft/src/CommRoqmeEstimate/RoqmeEstimate.o 


# Each subdirectory must supply rules for building sources it contributes
smartsoft/src/CommRoqmeEstimate/%.o: ../smartsoft/src/CommRoqmeEstimate/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I../ -I"/opt/ACE_wrappers" -I"/home/renan/SOFTWARE/smartsoft/include" -I"/home/renan/SOFTWARE/SmartMDSD-Toolchain-v3.12/CommRoqmeEstimate/smartsoft/src" -I"/home/renan/SOFTWARE/SmartMDSD-Toolchain-v3.12/CommRoqmeEstimate/smartsoft/src-gen" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


