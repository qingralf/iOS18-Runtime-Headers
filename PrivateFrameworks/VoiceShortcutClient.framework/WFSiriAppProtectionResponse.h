/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFSiriAppProtectionResponse : WFSiriActionResponse {
    bool  _didUnlock;
}

@property (nonatomic, readonly) bool didUnlock;

+ (bool)supportsSecureCoding;

- (bool)didUnlock;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDidUnlock:(bool)arg1 andError:(id)arg2;

@end
