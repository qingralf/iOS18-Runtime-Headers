/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDCameraRecordingLogEvent : HMMLogEvent {
    NSUUID * _cameraID;
    unsigned long long  _sequenceNumber;
    NSUUID * _sessionID;
}

@property (readonly, copy) NSUUID *cameraID;
@property (readonly, copy) NSUUID *ephemeralCameraID;
@property unsigned long long sequenceNumber;
@property (readonly, copy) NSUUID *sessionID;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)cameraID;
- (id)ephemeralCameraID;
- (id)initWithSessionID:(id)arg1 cameraID:(id)arg2 sequenceNumber:(unsigned long long)arg3;
- (unsigned long long)sequenceNumber;
- (id)sessionID;
- (void)setSequenceNumber:(unsigned long long)arg1;

@end