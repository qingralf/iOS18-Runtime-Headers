/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface _CNAssistedDataDetectorsHandleStringClassificationStrategy : NSObject <_CNHandleStringClassificationStrategy> {
    <_CNHandleStringClassificationStrategy> * _assistingStrategy;
    <_CNHandleStringClassificationStrategy> * _strategy;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)classificationOfHandleString:(id)arg1;
- (id)init;
- (id)initWithStrategy:(id)arg1;
- (void)makeAssistingStrategyIfNecessary;

@end