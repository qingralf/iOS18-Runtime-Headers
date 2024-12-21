/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioServerDriverTransports_Base.framework/AudioServerDriverTransports_Base
 */

@interface ASDTDeviceInterest : NSObject {
    <ASDTDeviceInterestProtocol> * _interested;
    int  _interests;
}

@property (nonatomic) <ASDTDeviceInterestProtocol> *interested;
@property (nonatomic) int interests;

+ (id)createForObject:(id)arg1 withInterests:(int)arg2;

- (void).cxx_destruct;
- (id)initForObject:(id)arg1 withInterests:(int)arg2;
- (id)interested;
- (int)interests;
- (void)notifyOfInterest:(int)arg1 forDevice:(id)arg2;
- (void)setInterested:(id)arg1;
- (void)setInterests:(int)arg1;

@end