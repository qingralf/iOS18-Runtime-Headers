/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMRemindersDataViewInvocation_fetchSubtasksMasksByParentReminderID : REMStoreInvocation <NSSecureCoding> {
    bool  _includingConcealed;
    REMObjectID * _parentReminderID;
}

@property (nonatomic) bool includingConcealed;
@property (nonatomic, readonly) REMObjectID *parentReminderID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (bool)includingConcealed;
- (id)initWithCoder:(id)arg1;
- (id)initWithParentReminderID:(id)arg1 includingConcealed:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (id)parentReminderID;
- (void)setIncludingConcealed:(bool)arg1;

@end
