/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface WFWorkflowChangeset : NSObject {
    NSSet * _inserted;
    NSSet * _modified;
    NSSet * _removed;
}

@property (nonatomic, readonly) NSSet *inserted;
@property (nonatomic, readonly) NSSet *modified;
@property (nonatomic, readonly) NSSet *removed;

- (void).cxx_destruct;
- (id)changesetForVisibleWorkflows;
- (id)initWithModifiedWorkflows:(id)arg1 insertedWorkflows:(id)arg2 removedWorkflows:(id)arg3;
- (id)inserted;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)modified;
- (id)removed;

@end
