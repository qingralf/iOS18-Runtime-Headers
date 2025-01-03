/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriKitRuntime.framework/SiriKitRuntime
 */

@interface SiriKitRuntime.StartExecutionTurn : NSObject <NSSecureCoding> {
    void executionRequestId;
    void isMUXEnabled;
    void isTapToEdit;
    void rootRequestId;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sessionId;
}

@property (nonatomic, readonly) NSString *debugDescription;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
