/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioServerDriverTransports_IOA2.framework/AudioServerDriverTransports_IOA2
 */

@interface ASDTIOA2InjectionStream : ASDTExclavesStream <ASDTIOA2Object> {
    ASDTIOA2Stream * _inputStream;
    unsigned int  _userClientID;
    bool  marked;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) ASDTIOA2Stream *inputStream;
@property (nonatomic, readonly) ASDTIOA2Device *ioa2Device;
@property (nonatomic) bool marked;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int userClientID;

- (void).cxx_destruct;
- (void)asyncDeviceChangedToSamplingRate:(double)arg1;
- (bool)changePhysicalFormat:(id)arg1;
- (bool)deviceChangedToSamplingRate:(double)arg1;
- (id)initWithIOA2Device:(id)arg1 inputStream:(id)arg2 registryDict:(id)arg3;
- (id)inputStream;
- (id)ioa2Device;
- (bool)marked;
- (id)physicalFormat;
- (int)pmPrepareStream:(int)arg1;
- (int)pmPrewarmStream:(int)arg1;
- (void)setInputStream:(id)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setMarked:(bool)arg1;
- (void)setPhysicalFormat:(id)arg1;
- (void)setPhysicalFormat:(id)arg1 alwaysNotify:(bool)arg2;
- (void)setPhysicalFormats:(id)arg1;
- (void)setUserClientID:(unsigned int)arg1;
- (bool)synchronizeWithRegistryDictionary:(id)arg1;
- (unsigned int)userClientID;

@end
