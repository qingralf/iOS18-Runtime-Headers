/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDMailboxPersistenceStatistics : NSObject {
    NSDictionary * _accountPerInbox;
    NSDictionary * _accountTypePerAccount;
    NSDictionary * _mailboxesPerAccount;
    long long  _messagesInLargestMailbox;
    long long  _messagesInSecondLargestMailbox;
    NSDictionary * _messagesPerAccount;
    NSDictionary * _messagesPerInbox;
    NSDictionary * _messagesPerMailbox;
}

@property (nonatomic, readonly, retain) NSDictionary *accountPerInbox;
@property (nonatomic, readonly, retain) NSDictionary *accountTypePerAccount;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, retain) NSDictionary *mailboxesPerAccount;
@property (nonatomic, readonly) long long messagesInLargestMailbox;
@property (nonatomic, readonly) long long messagesInSecondLargestMailbox;
@property (nonatomic, readonly, retain) NSDictionary *messagesPerAccount;
@property (nonatomic, readonly, retain) NSDictionary *messagesPerInbox;
@property (nonatomic, readonly, retain) NSDictionary *messagesPerMailbox;
@property (readonly, copy) NSString *redactedDescription;

- (void).cxx_destruct;
- (id)accountPerInbox;
- (id)accountTypePerAccount;
- (id)debugDescription;
- (id)initWithMessagesInLargestMailbox:(long long)arg1 messagesInSecondLargestMailbox:(long long)arg2 messagesPerMailbox:(id)arg3 mailboxesPerAccount:(id)arg4 messagesPerAccount:(id)arg5 accountTypePerAccount:(id)arg6 messagesPerInbox:(id)arg7 accountPerInbox:(id)arg8;
- (id)mailboxesPerAccount;
- (long long)messagesInLargestMailbox;
- (long long)messagesInSecondLargestMailbox;
- (id)messagesPerAccount;
- (id)messagesPerInbox;
- (id)messagesPerMailbox;
- (id)redactedDescription;

@end