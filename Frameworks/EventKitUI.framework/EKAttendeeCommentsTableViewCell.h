/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKAttendeeCommentsTableViewCell : UITableViewCell {
    UIView * _avatarView;
    UIView * _commentView;
    NSMutableArray * _constraints;
    EKParticipant * _participant;
    UILayoutGuide * _textCenteringGuide;
    UIView * _timeView;
    UIView * _titleView;
}

@property (nonatomic, readonly) EKParticipant *participant;

- (void).cxx_destruct;
- (void)_updateConstraints;
- (id)initWithParticipant:(id)arg1;
- (id)participant;

@end
