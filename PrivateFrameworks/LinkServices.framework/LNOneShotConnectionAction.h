/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices
 */

@interface LNOneShotConnectionAction : LNConnectionAction <BSXPCSecureCoding, NSSecureCoding> {
    LNAction * _action;
    LNActionExecutorOptions * _executorOptions;
}

@property (nonatomic, readonly) LNAction *action;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) LNActionExecutorOptions *executorOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)executorOptions;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 action:(id)arg2 executorOptions:(id)arg3;

@end
