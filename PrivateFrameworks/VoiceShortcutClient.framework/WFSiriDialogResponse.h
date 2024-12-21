/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFSiriDialogResponse : WFSiriActionResponse {
    WFDialogResponse * _dialogResponse;
}

@property (nonatomic, readonly) WFDialogResponse *dialogResponse;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dialogResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDialogResponse:(id)arg1;

@end