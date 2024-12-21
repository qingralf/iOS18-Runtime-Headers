/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUChannelFormat : NSObject {
    long long  _channelType;
}

@property (nonatomic, readonly) long long channelType;

- (long long)channelType;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (bool)isCompatibleWithChannelFormat:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToChannelFormat:(id)arg1;
- (id)subchannelFormatAtIndex:(unsigned long long)arg1;
- (id)subchannelFormatForKey:(id)arg1;
- (bool)validateChannelData:(id)arg1 error:(out id*)arg2;

@end