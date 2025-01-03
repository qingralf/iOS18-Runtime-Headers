/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStructuredDictationPlaceResult : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *placeResultType;
@property (nonatomic, copy) NSData *resultData;
@property (readonly) Class superclass;

+ (id)structuredDictationPlaceResult;
+ (id)structuredDictationPlaceResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)placeResultType;
- (id)resultData;
- (void)setPlaceResultType:(id)arg1;
- (void)setResultData:(id)arg1;

@end
