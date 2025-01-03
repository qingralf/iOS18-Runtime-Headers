/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUILParseExpressionsCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *parsedExpressions;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)parseExpressionsCompleted;
+ (id)parseExpressionsCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)parsedExpressions;
- (bool)requiresResponse;
- (void)setParsedExpressions:(id)arg1;

@end
