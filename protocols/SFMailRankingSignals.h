/* Generated by RuntimeBrowser.
 */

@protocol SFMailRankingSignals <NSObject>

@required

- (NSNumber *)averageEngagementAgeLast14Days;
- (NSNumber *)averageEngagementAgeLast21Days;
- (NSNumber *)averageEngagementAgeLast30Days;
- (NSNumber *)averageEngagementAgeLast7Days;
- (unsigned long long)countBigramMatchInAttachmentNames;
- (unsigned long long)countBigramMatchInAttachmentTypes;
- (unsigned long long)countBigramMatchInAuthorEmailAddresses;
- (unsigned long long)countBigramMatchInAuthors;
- (unsigned long long)countBigramMatchInEmailAddresses;
- (unsigned long long)countBigramMatchInRecipientEmailAddresses;
- (unsigned long long)countBigramMatchInRecipients;
- (unsigned long long)countBigramMatchInSubject;
- (unsigned long long)countBigramMatchInTextContent;
- (unsigned long long)countBigramPrefixMatchInAttachmentNames;
- (unsigned long long)countBigramPrefixMatchInAttachmentTypes;
- (unsigned long long)countBigramPrefixMatchInAuthorEmailAddresses;
- (unsigned long long)countBigramPrefixMatchInAuthors;
- (unsigned long long)countBigramPrefixMatchInEmailAddresses;
- (unsigned long long)countBigramPrefixMatchInRecipientEmailAddresses;
- (unsigned long long)countBigramPrefixMatchInRecipients;
- (unsigned long long)countBigramPrefixMatchInSubject;
- (unsigned long long)countBigramPrefixMatchInTextContent;
- (unsigned long long)countNgramMatchInAttachmentNames;
- (unsigned long long)countNgramMatchInAttachmentTypes;
- (unsigned long long)countNgramMatchInAuthorEmailAddresses;
- (unsigned long long)countNgramMatchInAuthors;
- (unsigned long long)countNgramMatchInEmailAddresses;
- (unsigned long long)countNgramMatchInRecipientEmailAddresses;
- (unsigned long long)countNgramMatchInRecipients;
- (unsigned long long)countNgramMatchInSubject;
- (unsigned long long)countNgramMatchInTextContent;
- (unsigned long long)countNgramPrefixMatchInAttachmentNames;
- (unsigned long long)countNgramPrefixMatchInAttachmentTypes;
- (unsigned long long)countNgramPrefixMatchInAuthorEmailAddresses;
- (unsigned long long)countNgramPrefixMatchInAuthors;
- (unsigned long long)countNgramPrefixMatchInEmailAddresses;
- (unsigned long long)countNgramPrefixMatchInRecipientEmailAddresses;
- (unsigned long long)countNgramPrefixMatchInRecipients;
- (unsigned long long)countNgramPrefixMatchInSubject;
- (unsigned long long)countNgramPrefixMatchInTextContent;
- (unsigned long long)countUnigramMatchInAttachmentNames;
- (unsigned long long)countUnigramMatchInAttachmentTypes;
- (unsigned long long)countUnigramMatchInAuthorEmailAddresses;
- (unsigned long long)countUnigramMatchInAuthors;
- (unsigned long long)countUnigramMatchInEmailAddresses;
- (unsigned long long)countUnigramMatchInRecipientEmailAddresses;
- (unsigned long long)countUnigramMatchInRecipients;
- (unsigned long long)countUnigramMatchInSubject;
- (unsigned long long)countUnigramMatchInTextContent;
- (unsigned long long)countUnigramPrefixMatchInAttachmentNames;
- (unsigned long long)countUnigramPrefixMatchInAttachmentTypes;
- (unsigned long long)countUnigramPrefixMatchInAuthorEmailAddresses;
- (unsigned long long)countUnigramPrefixMatchInAuthors;
- (unsigned long long)countUnigramPrefixMatchInEmailAddresses;
- (unsigned long long)countUnigramPrefixMatchInRecipientEmailAddresses;
- (unsigned long long)countUnigramPrefixMatchInRecipients;
- (unsigned long long)countUnigramPrefixMatchInSubject;
- (unsigned long long)countUnigramPrefixMatchInTextContent;
- (unsigned long long)daysSinceReceipt;
- (NSDictionary *)dictionaryRepresentation;
- (bool)isFlagged;
- (bool)isRepliedTo;
- (bool)isSemanticMatch;
- (bool)isSyntacticMatch;
- (NSData *)jsonData;
- (NSNumber *)l1Score;
- (NSNumber *)l2Score;
- (unsigned long long)numDaysEngagedLast30Days;
- (unsigned long long)numEngagements;
- (NSNumber *)semanticScore;
- (void)setAverageEngagementAgeLast14Days:(NSNumber *)arg1;
- (void)setAverageEngagementAgeLast21Days:(NSNumber *)arg1;
- (void)setAverageEngagementAgeLast30Days:(NSNumber *)arg1;
- (void)setAverageEngagementAgeLast7Days:(NSNumber *)arg1;
- (void)setCountBigramMatchInAttachmentNames:(unsigned long long)arg1;
- (void)setCountBigramMatchInAttachmentTypes:(unsigned long long)arg1;
- (void)setCountBigramMatchInAuthorEmailAddresses:(unsigned long long)arg1;
- (void)setCountBigramMatchInAuthors:(unsigned long long)arg1;
- (void)setCountBigramMatchInEmailAddresses:(unsigned long long)arg1;
- (void)setCountBigramMatchInRecipientEmailAddresses:(unsigned long long)arg1;
- (void)setCountBigramMatchInRecipients:(unsigned long long)arg1;
- (void)setCountBigramMatchInSubject:(unsigned long long)arg1;
- (void)setCountBigramMatchInTextContent:(unsigned long long)arg1;
- (void)setCountBigramPrefixMatchInAttachmentNames:(unsigned long long)arg1;
- (void)setCountBigramPrefixMatchInAttachmentTypes:(unsigned long long)arg1;
- (void)setCountBigramPrefixMatchInAuthorEmailAddresses:(unsigned long long)arg1;
- (void)setCountBigramPrefixMatchInAuthors:(unsigned long long)arg1;
- (void)setCountBigramPrefixMatchInEmailAddresses:(unsigned long long)arg1;
- (void)setCountBigramPrefixMatchInRecipientEmailAddresses:(unsigned long long)arg1;
- (void)setCountBigramPrefixMatchInRecipients:(unsigned long long)arg1;
- (void)setCountBigramPrefixMatchInSubject:(unsigned long long)arg1;
- (void)setCountBigramPrefixMatchInTextContent:(unsigned long long)arg1;
- (void)setCountNgramMatchInAttachmentNames:(unsigned long long)arg1;
- (void)setCountNgramMatchInAttachmentTypes:(unsigned long long)arg1;
- (void)setCountNgramMatchInAuthorEmailAddresses:(unsigned long long)arg1;
- (void)setCountNgramMatchInAuthors:(unsigned long long)arg1;
- (void)setCountNgramMatchInEmailAddresses:(unsigned long long)arg1;
- (void)setCountNgramMatchInRecipientEmailAddresses:(unsigned long long)arg1;
- (void)setCountNgramMatchInRecipients:(unsigned long long)arg1;
- (void)setCountNgramMatchInSubject:(unsigned long long)arg1;
- (void)setCountNgramMatchInTextContent:(unsigned long long)arg1;
- (void)setCountNgramPrefixMatchInAttachmentNames:(unsigned long long)arg1;
- (void)setCountNgramPrefixMatchInAttachmentTypes:(unsigned long long)arg1;
- (void)setCountNgramPrefixMatchInAuthorEmailAddresses:(unsigned long long)arg1;
- (void)setCountNgramPrefixMatchInAuthors:(unsigned long long)arg1;
- (void)setCountNgramPrefixMatchInEmailAddresses:(unsigned long long)arg1;
- (void)setCountNgramPrefixMatchInRecipientEmailAddresses:(unsigned long long)arg1;
- (void)setCountNgramPrefixMatchInRecipients:(unsigned long long)arg1;
- (void)setCountNgramPrefixMatchInSubject:(unsigned long long)arg1;
- (void)setCountNgramPrefixMatchInTextContent:(unsigned long long)arg1;
- (void)setCountUnigramMatchInAttachmentNames:(unsigned long long)arg1;
- (void)setCountUnigramMatchInAttachmentTypes:(unsigned long long)arg1;
- (void)setCountUnigramMatchInAuthorEmailAddresses:(unsigned long long)arg1;
- (void)setCountUnigramMatchInAuthors:(unsigned long long)arg1;
- (void)setCountUnigramMatchInEmailAddresses:(unsigned long long)arg1;
- (void)setCountUnigramMatchInRecipientEmailAddresses:(unsigned long long)arg1;
- (void)setCountUnigramMatchInRecipients:(unsigned long long)arg1;
- (void)setCountUnigramMatchInSubject:(unsigned long long)arg1;
- (void)setCountUnigramMatchInTextContent:(unsigned long long)arg1;
- (void)setCountUnigramPrefixMatchInAttachmentNames:(unsigned long long)arg1;
- (void)setCountUnigramPrefixMatchInAttachmentTypes:(unsigned long long)arg1;
- (void)setCountUnigramPrefixMatchInAuthorEmailAddresses:(unsigned long long)arg1;
- (void)setCountUnigramPrefixMatchInAuthors:(unsigned long long)arg1;
- (void)setCountUnigramPrefixMatchInEmailAddresses:(unsigned long long)arg1;
- (void)setCountUnigramPrefixMatchInRecipientEmailAddresses:(unsigned long long)arg1;
- (void)setCountUnigramPrefixMatchInRecipients:(unsigned long long)arg1;
- (void)setCountUnigramPrefixMatchInSubject:(unsigned long long)arg1;
- (void)setCountUnigramPrefixMatchInTextContent:(unsigned long long)arg1;
- (void)setDaysSinceReceipt:(unsigned long long)arg1;
- (void)setIsFlagged:(bool)arg1;
- (void)setIsRepliedTo:(bool)arg1;
- (void)setIsSemanticMatch:(bool)arg1;
- (void)setIsSyntacticMatch:(bool)arg1;
- (void)setL1Score:(NSNumber *)arg1;
- (void)setL2Score:(NSNumber *)arg1;
- (void)setNumDaysEngagedLast30Days:(unsigned long long)arg1;
- (void)setNumEngagements:(unsigned long long)arg1;
- (void)setSemanticScore:(NSNumber *)arg1;
- (void)setSyntacticScore:(NSNumber *)arg1;
- (void)setWasReorderedByRecency:(bool)arg1;
- (NSNumber *)syntacticScore;
- (bool)wasReorderedByRecency;

@end