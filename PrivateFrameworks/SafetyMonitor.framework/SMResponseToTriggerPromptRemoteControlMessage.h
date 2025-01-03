/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafetyMonitor.framework/SafetyMonitor
 */

@interface SMResponseToTriggerPromptRemoteControlMessage : SMMessage {
    long long  _response;
    NSString * _sourceDeviceID;
    long long  _sourceDeviceType;
}

@property (nonatomic, readonly) long long response;
@property (nonatomic, readonly) NSString *sourceDeviceID;
@property (nonatomic, readonly) long long sourceDeviceType;

+ (unsigned long long)messageType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 messageID:(id)arg2 response:(long long)arg3 sessionID:(id)arg4 sourceDeviceType:(long long)arg5 sourceDeviceID:(id)arg6;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTriggerPromptResponse:(long long)arg1 sessionID:(id)arg2 sourceDeviceType:(long long)arg3 sourceDeviceID:(id)arg4;
- (id)outputToDictionary;
- (long long)response;
- (id)sourceDeviceID;
- (long long)sourceDeviceType;

@end
