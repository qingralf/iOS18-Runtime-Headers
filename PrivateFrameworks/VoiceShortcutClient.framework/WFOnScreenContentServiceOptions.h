/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFOnScreenContentServiceOptions : NSObject <NSSecureCoding> {
    struct { 
        unsigned int val[8]; 
    }  _originatingProcessAuditToken;
    NSArray * _supportedItemClasses;
}

@property (nonatomic) struct { unsigned int x1[8]; } originatingProcessAuditToken;
@property (nonatomic, readonly) NSArray *supportedItemClasses;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSupportedItemClasses:(id)arg1 originatingProcessAuditToken:(struct { unsigned int x1[8]; })arg2;
- (struct { unsigned int x1[8]; })originatingProcessAuditToken;
- (void)setOriginatingProcessAuditToken:(struct { unsigned int x1[8]; })arg1;
- (id)supportedItemClasses;

@end
