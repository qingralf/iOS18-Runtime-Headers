/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CopresenceCore.framework/CopresenceCore
 */

@interface CPBackgroundSessionCreationRequest : NSObject <NSSecureCoding> {
    void activitySessionRequest;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  id;
    void isCrossAccount;
    void localMember;
    void members;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
