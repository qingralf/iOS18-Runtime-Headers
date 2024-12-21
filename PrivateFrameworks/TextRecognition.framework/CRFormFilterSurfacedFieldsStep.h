/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

@interface CRFormFilterSurfacedFieldsStep : NSObject <CRFormPostProcessingStep> {
    bool  _assignGlobalOrder;
}

@property (readonly) bool assignGlobalOrder;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_setGlobalIndexesForFields:(id)arg1 externalFields:(id)arg2;
- (bool)assignGlobalOrder;
- (id)initWithAssignGlobalOrder:(bool)arg1;
- (id)process:(id)arg1 externalFields:(id)arg2 document:(id)arg3 options:(id)arg4;

@end