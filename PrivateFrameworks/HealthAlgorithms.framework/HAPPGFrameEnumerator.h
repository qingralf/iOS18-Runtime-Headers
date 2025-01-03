/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
 */

@interface HAPPGFrameEnumerator : NSEnumerator {
    NSDate * _bootDate;
    struct unique_ptr<mimosa::Decoder, std::default_delete<mimosa::Decoder>> { 
        struct __compressed_pair<mimosa::Decoder *, std::default_delete<mimosa::Decoder>> { 
            struct Decoder {} *__value_; 
        } __ptr_; 
    }  _decoder;
    struct shared_ptr<const mimosa::Metadata> { 
        struct Metadata {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _metadata;
    NSData * _mimosaData;
    struct shared_ptr<const std::variant<mimosa::PacketV1, mimosa::PacketV2, mimosa::PacketV3, mimosa::PacketV4, mimosa::PacketV5, mimosa::PacketV6, mimosa::PacketV7>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _packetToProcess;
    struct unique_ptr<health_algorithms::PPGProcessor, std::default_delete<health_algorithms::PPGProcessor>> { 
        struct __compressed_pair<health_algorithms::PPGProcessor *, std::default_delete<health_algorithms::PPGProcessor>> { 
            struct PPGProcessor {} *__value_; 
        } __ptr_; 
    }  _ppgProcessor;
    struct span<const std::byte, 18446744073709551615UL> { 
        unsigned char *__data_; 
        unsigned long long __size_; 
    }  _undecodedBytes;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)handleMetadata:(const void*)arg1;
- (void)handlePacket:(const void*)arg1 bootTime:(double)arg2;
- (id)initWithBinaryRepresentation:(id)arg1;
- (id)nextObject;

@end
