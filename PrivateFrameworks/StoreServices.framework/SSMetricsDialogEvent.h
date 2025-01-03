/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsDialogEvent : SSMetricsBaseEvent <SSXPCCoding>

@property (nonatomic, copy) NSString *actionType;
@property (nonatomic, copy) NSString *actionURL;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *details;
@property (nonatomic, copy) NSString *dialogId;
@property (nonatomic, copy) NSString *dialogType;
@property (nonatomic, copy) NSString *dualAction;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *result;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *targetId;
@property (nonatomic, copy) NSArray *userActions;

- (id)actionType;
- (id)actionURL;
- (id)copyXPCEncoding;
- (id)details;
- (id)dialogId;
- (id)dialogType;
- (id)dualAction;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (id)message;
- (id)result;
- (void)setActionType:(id)arg1;
- (void)setActionURL:(id)arg1;
- (void)setDetails:(id)arg1;
- (void)setDialogId:(id)arg1;
- (void)setDialogType:(id)arg1;
- (void)setDualAction:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setTargetId:(id)arg1;
- (void)setUserActions:(id)arg1;
- (id)targetId;
- (id)userActions;

@end
