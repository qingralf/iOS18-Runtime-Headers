/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASExtractSpeechDataCompleted : SADomainCommand <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *speechData;
@property (nonatomic, copy) NSString *speechDataUrl;
@property (readonly) Class superclass;

+ (id)extractSpeechDataCompleted;
+ (id)extractSpeechDataCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setSpeechData:(id)arg1;
- (void)setSpeechDataUrl:(id)arg1;
- (id)speechData;
- (id)speechDataUrl;

@end
