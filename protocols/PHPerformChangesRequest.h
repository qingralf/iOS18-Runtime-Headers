/* Generated by RuntimeBrowser.
 */

@protocol PHPerformChangesRequest <NSObject>

@required

- (void)recordDeleteRequest:(id <PHDeleteChangeRequest>)arg1;
- (void)recordInsertRequest:(id <PHInsertChangeRequest>)arg1;
- (void)recordOtherChangeRequest:(id <PHChangeRequestCore>)arg1;
- (void)recordUpdateRequest:(id <PHUpdateChangeRequest>)arg1;

@end
