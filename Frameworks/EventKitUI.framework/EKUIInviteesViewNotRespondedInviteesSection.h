/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIInviteesViewNotRespondedInviteesSection : NSObject <EKUIInviteesViewSection> {
    id /* block */  _addInviteesTapped;
    NSOperationQueue * _availabilityRequestsQueue;
    NSString * _cachedAddInviteeCellReuseIdentifier;
    NSString * _cachedInviteeCellReuseIdentifier;
    bool  _canSeeAttendeeStatuses;
    bool  _editable;
    EKEvent * _event;
    NSMutableSet * _participantAddressesForInFlightAvailabilityOperations;
    NSMutableDictionary * _participantAddressesToAvailabilityType;
    NSMutableDictionary * _participantAddressesToParticipantIndex;
    id /* block */  _participantRemoved;
    id /* block */  _participantSetRole;
    id /* block */  _participantTapped;
    NSMutableArray * _participants;
    unsigned long long  _reuseIdentifierVersion;
    id /* block */  _tableViewCellHook;
}

@property (nonatomic, copy) id /* block */ addInviteesTapped;
@property (nonatomic, retain) NSOperationQueue *availabilityRequestsQueue;
@property (nonatomic, retain) NSString *cachedAddInviteeCellReuseIdentifier;
@property (nonatomic, retain) NSString *cachedInviteeCellReuseIdentifier;
@property (nonatomic) bool canSeeAttendeeStatuses;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool editable;
@property (nonatomic, retain) EKEvent *event;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *participantAddressesForInFlightAvailabilityOperations;
@property (nonatomic, retain) NSMutableDictionary *participantAddressesToAvailabilityType;
@property (nonatomic, retain) NSMutableDictionary *participantAddressesToParticipantIndex;
@property (nonatomic, copy) id /* block */ participantRemoved;
@property (nonatomic, copy) id /* block */ participantSetRole;
@property (nonatomic, copy) id /* block */ participantTapped;
@property (nonatomic, retain) NSMutableArray *participants;
@property (nonatomic) unsigned long long reuseIdentifierVersion;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ tableViewCellHook;

+ (id)_participantAddressForParticipant:(id)arg1;

- (void).cxx_destruct;
- (void)_addAddressToSetOfAddressesToInflightOperations:(id)arg1;
- (bool)_isAddInviteesRow:(long long)arg1;
- (bool)_isValidRow:(long long)arg1;
- (id)_lookUpAvailabilityTypeForParticipantAddress:(id)arg1;
- (id)_lookUpParticipantIndexForParticipantAddress:(id)arg1;
- (void)_removeAddressFromDictionaryOfAddressesToAvailabilityType:(id)arg1;
- (void)_removeAddressFromDictionaryOfAddressesToParticipantIndex:(id)arg1;
- (void)_removeAddressFromSetOfAddressesToInflightOperations:(id)arg1;
- (void)_removeParticipantAtIndexPath:(id)arg1;
- (void)_setAvailabilityType:(id)arg1 forParticipantAddress:(id)arg2;
- (bool)_setOfAddressesToInflightOperationsContainsAddress:(id)arg1;
- (void)_setParticipantIndex:(id)arg1 forParticipantAddress:(id)arg2;
- (void)_updateCell:(id)arg1 forParticipantAtIndex:(long long)arg2 animated:(bool)arg3;
- (void)_updateCellForParticipantWithAddress:(id)arg1;
- (id)actionsForRow:(id)arg1;
- (id /* block */)addInviteesTapped;
- (id)availabilityRequestsQueue;
- (id)cachedAddInviteeCellReuseIdentifier;
- (id)cachedInviteeCellReuseIdentifier;
- (bool)canEditRow:(id)arg1;
- (bool)canSeeAttendeeStatuses;
- (bool)canSelectRow:(id)arg1;
- (void)cancelOutstandingOperations;
- (id)cellForIndexPath:(id)arg1 inTableView:(id)arg2;
- (void)commitEditingStyle:(long long)arg1 forRow:(id)arg2;
- (id)contextMenuDataForIndexPath:(id)arg1 interaction:(id)arg2;
- (void)dealloc;
- (id)debugTitle;
- (bool)editable;
- (long long)editingStyleForRow:(id)arg1;
- (double)estimatedHeightForRow:(id)arg1;
- (id)event;
- (id)headerTitle;
- (id)init;
- (unsigned long long)numberOfRows;
- (id)participantAddressesForInFlightAvailabilityOperations;
- (id)participantAddressesToAvailabilityType;
- (id)participantAddressesToParticipantIndex;
- (id /* block */)participantRemoved;
- (id /* block */)participantSetRole;
- (id /* block */)participantTapped;
- (id)participants;
- (void)reloadAndRegisterReusableCellsWithTableView:(id)arg1;
- (unsigned long long)reuseIdentifierVersion;
- (bool)sectionShouldBeShown;
- (void)selectRow:(id)arg1;
- (void)setAddInviteesTapped:(id /* block */)arg1;
- (void)setAvailabilityRequestsQueue:(id)arg1;
- (void)setCachedAddInviteeCellReuseIdentifier:(id)arg1;
- (void)setCachedInviteeCellReuseIdentifier:(id)arg1;
- (void)setCanSeeAttendeeStatuses:(bool)arg1;
- (void)setEditable:(bool)arg1;
- (void)setEvent:(id)arg1;
- (void)setParticipantAddressesForInFlightAvailabilityOperations:(id)arg1;
- (void)setParticipantAddressesToAvailabilityType:(id)arg1;
- (void)setParticipantAddressesToParticipantIndex:(id)arg1;
- (void)setParticipantRemoved:(id /* block */)arg1;
- (void)setParticipantSetRole:(id /* block */)arg1;
- (void)setParticipantTapped:(id /* block */)arg1;
- (void)setParticipants:(id)arg1;
- (void)setReuseIdentifierVersion:(unsigned long long)arg1;
- (void)setTableViewCellHook:(id /* block */)arg1;
- (bool)supportsContextMenuForIndexPath:(id)arg1;
- (id /* block */)tableViewCellHook;
- (id)titleForDeleteConfirmationButtonForRow:(id)arg1;
- (void)updateWithEvent:(id)arg1 editable:(bool)arg2 fromDetail:(bool)arg3;

@end
