/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUAddRestrictedGuestTableViewController : HUItemTableViewController <HUPresentationDelegateHost, HURestrictedGuestScheduleViewControllerDelegate, HUSwitchCellDelegate> {
    NSMutableArray * _accessoriesToAllow;
    <HUAddRestrictedGuestViewDelegate> * _delegate;
    <HUPresentationDelegate> * _presentationDelegate;
    HUAddRestrictedGuestItemManager * _restrictedGuestItemManager;
}

@property (nonatomic, retain) NSMutableArray *accessoriesToAllow;
@property (nonatomic, readonly) NSArray *accessoriesToAllowToRG;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <HUAddRestrictedGuestViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <HUPresentationDelegate> *presentationDelegate;
@property (nonatomic, retain) HUAddRestrictedGuestItemManager *restrictedGuestItemManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessoriesToAllow;
- (id)accessoriesToAllowToRG;
- (bool)canBecomeFirstResponder;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)delegate;
- (void)didUpdateInviteUserSchedule:(id)arg1 schedule:(id)arg2;
- (id)initWithItem:(id)arg1 home:(id)arg2 inviteeAddresses:(id)arg3;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)presentationDelegate;
- (id)restrictedGuestItemManager;
- (id)rgHomeAccessSettings;
- (void)sendInvites;
- (void)setAccessoriesToAllow:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setRestrictedGuestItemManager:(id)arg1;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;

@end