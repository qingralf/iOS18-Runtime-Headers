/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXConditionValidatorManager : NSObject <SXConditionValidating, SXConditionValidatorManager> {
    NSMutableArray * _validators;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableArray *validators;

- (void).cxx_destruct;
- (void)addConditionValidator:(id)arg1;
- (id)init;
- (bool)validateCondition:(id)arg1 context:(id)arg2;
- (id)validators;

@end
