/* Generated by RuntimeBrowser.
 */

@protocol SHSheetMutableRemoteSceneSettings <NSObject>

@required

- (SFCollaborationCloudSharingRequest *)cloudShareRequest;
- (_SWCollaborationShareOptions *)collaborationOptions;
- (NSArray *)customizationGroups;
- (long long)hostProcessType;
- (long long)presentationStyle;
- (SHSheetUIServiceClientContext *)sessionContext;
- (void)setCloudShareRequest:(SFCollaborationCloudSharingRequest *)arg1;
- (void)setCollaborationOptions:(_SWCollaborationShareOptions *)arg1;
- (void)setCustomizationGroups:(NSArray *)arg1;
- (void)setHostProcessType:(long long)arg1;
- (void)setPresentationStyle:(long long)arg1;
- (void)setSessionContext:(SHSheetUIServiceClientContext *)arg1;

@end