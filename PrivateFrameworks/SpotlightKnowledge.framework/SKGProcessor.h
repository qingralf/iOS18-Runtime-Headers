/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightKnowledge.framework/SpotlightKnowledge
 */

@interface SKGProcessor : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)copyMailboxesFromRecord:(id)arg1;
+ (bool)docContentExceedsMaxAllowedSize:(id)arg1;
+ (bool)docIsTrashOrJunkMail:(id)arg1;
+ (id)embeddingVersionDataWithVersion:(id)arg1;
+ (unsigned long long)getHTMLContentByteSizeForRecord:(id)arg1;
+ (unsigned long long)getTextContentByteSizeForRecord:(id)arg1;
+ (id)normalizeForEmbeddingGeneration:(id)arg1 bundleID:(id)arg2;
+ (bool)recordHasHTMLContent:(id)arg1;
+ (bool)recordHasTextContent:(id)arg1;
+ (id)sharedProcessor;
+ (unsigned long long)textContentLengthForRecord:(id)arg1;

- (void).cxx_destruct;
- (bool)canGenerateEmbeddingsForFPRecord:(id)arg1 bundleID:(id)arg2;
- (bool)canGenerateEmbeddingsForMailRecord:(id)arg1 bundleID:(id)arg2;
- (void)clearDocUnderstandingAttributes:(id)arg1;
- (void)clearKeyphrasesAttributes:(id)arg1;
- (void)completeDocUnderstandingAttributes:(id)arg1;
- (void)completeKeyphrasesAttributes:(id)arg1;
- (id)copyBundleIdentifierFromRecord:(id)arg1;
- (id)copyContentTypeFromRecord:(id)arg1;
- (id)copyContentURLFromRecord:(id)arg1;
- (id)copyDateStringFromRecordWithFormat:(id)arg1 key:(id)arg2 formatString:(id)arg3;
- (id)copyDescriptionContentFromRecord:(id)arg1;
- (id)copyDocumentTypesFromRecord:(id)arg1;
- (id)copyDocumentUnderstandingVersionFromRecord:(id)arg1;
- (id)copyDomainIdentifierFromRecord:(id)arg1;
- (id)copyEmbeddingModelVersionFromRecord:(id)arg1;
- (id)copyEmbeddingVersionFromRecord:(id)arg1;
- (id)copyExtraDataFromWalletRecord:(id)arg1;
- (id)copyFilePathFromRecord:(id)arg1;
- (id)copyFileProviderIDFromRecord:(id)arg1;
- (id)copyKeyphraseVersionFromRecord:(id)arg1;
- (id)copyLanguageFromRecord:(id)arg1;
- (id)copyNumberValueFromRecord:(id)arg1 key:(id)arg2;
- (id)copyPeopleVersionFromRecord:(id)arg1;
- (id)copyPersonaFromRecord:(id)arg1;
- (id)copyProtectionClassFromRecord:(id)arg1;
- (id)copyReferenceIdentifierFromRecord:(id)arg1;
- (id)copySnippetFromRecord:(id)arg1;
- (id)copyStringArrayFromRecordAndConcatnate:(id)arg1 key:(id)arg2;
- (id)copyStringValueFromRecord:(id)arg1 key:(id)arg2;
- (id)copySuggestedEventsVersionFromRecord:(id)arg1;
- (id)copyTextContentFromRecord:(id)arg1;
- (id)copyTitleFromRecord:(id)arg1;
- (id)dateFromRecord:(id)arg1 key:(id)arg2;
- (bool)docUnderstandingRecordNeedsProcessing:(id)arg1 bundleID:(id)arg2 isUpdate:(bool)arg3 hasTextContent:(bool)arg4 shouldClear:(bool*)arg5 shouldMarkComplete:(bool*)arg6;
- (bool)embeddingRecordNeedsProcessing:(id)arg1 bundleID:(id)arg2 isUpdate:(bool)arg3 hasTextContent:(bool)arg4 shouldClear:(bool*)arg5 shouldMarkComplete:(bool*)arg6;
- (bool)extractContentFromRecord:(id)arg1 bundleID:(id)arg2 content:(id*)arg3 maxChunkCountPtr:(unsigned long long*)arg4 textLength:(unsigned long long*)arg5;
- (bool)extractContentFromRecordForCalendar:(id)arg1 bundleID:(id)arg2 content:(id*)arg3 maxChunkCountPtr:(unsigned long long*)arg4 textLength:(unsigned long long*)arg5;
- (bool)extractContentFromRecordForEvents:(id)arg1 bundleID:(id)arg2 content:(id*)arg3 maxChunkCountPtr:(unsigned long long*)arg4 textLength:(unsigned long long*)arg5;
- (bool)extractContentFromRecordForMail:(id)arg1 bundleID:(id)arg2 content:(id*)arg3 maxChunkCountPtr:(unsigned long long*)arg4 textLength:(unsigned long long*)arg5;
- (bool)extractContentFromRecordForMessages:(id)arg1 bundleID:(id)arg2 content:(id*)arg3 maxChunkCountPtr:(unsigned long long*)arg4 textLength:(unsigned long long*)arg5;
- (bool)extractContentFromRecordForReminders:(id)arg1 bundleID:(id)arg2 content:(id*)arg3 maxChunkCountPtr:(unsigned long long*)arg4 textLength:(unsigned long long*)arg5;
- (bool)extractContentFromRecordForSafari:(id)arg1 bundleID:(id)arg2 content:(id*)arg3 maxChunkCountPtr:(unsigned long long*)arg4 textLength:(unsigned long long*)arg5;
- (bool)extractContentFromRecordForWallet:(id)arg1 bundleID:(id)arg2 content:(id*)arg3 maxChunkCountPtr:(unsigned long long*)arg4 textLength:(unsigned long long*)arg5;
- (id)initWithOptions:(id)arg1;
- (bool)isStringOnlyNumbersOrPunctuationSpaces:(id)arg1;
- (bool)itemForRecordHasTextContent:(id)arg1;
- (bool)keyphraseRecordNeedsProcessing:(id)arg1 bundleID:(id)arg2 isUpdate:(bool)arg3 hasTextContent:(bool)arg4 shouldClear:(bool*)arg5 shouldMarkComplete:(bool*)arg6;
- (bool)needsDocumentUnderstandingForRecord:(id)arg1 bundleID:(id)arg2;
- (bool)needsEmbeddingsForRecord:(id)arg1 bundleID:(id)arg2;
- (bool)needsKeyphrasesForRecord:(id)arg1 bundleID:(id)arg2;
- (bool)needsPriorityForRecord:(id)arg1 bundleID:(id)arg2;
- (bool)needsSuggestedEventsForRecord:(id)arg1 bundleID:(id)arg2;
- (id)queue;
- (bool)recordContainsValue:(id)arg1 key:(id)arg2;
- (bool)recordForItemHasTextContent:(id)arg1;
- (bool)recordForItemWillHaveTextContent:(id)arg1;
- (bool)recordIsCurrent:(id)arg1 toCalendarUnit:(unsigned long long)arg2 maxOffset:(unsigned long long)arg3 checkFuture:(bool)arg4 dateKeys:(id)arg5;
- (bool)recordIsRecent:(id)arg1 toCalendarUnit:(unsigned long long)arg2 maxOffset:(unsigned long long)arg3 dateKeys:(id)arg4;
- (bool)recordIsValid:(id)arg1;
- (id)referenceDateForRecord:(id)arg1;
- (void)setQueue:(id)arg1;
- (bool)shouldGenerateDocumentUnderstandingForRecord:(id)arg1 bundleID:(id)arg2;
- (bool)shouldGenerateEmbeddingsForRecord:(id)arg1 bundleID:(id)arg2;
- (bool)shouldGenerateKeyphrasesForRecord:(id)arg1 bundleID:(id)arg2;
- (bool)shouldGenerateSuggestedEventsForRecord:(id)arg1 bundleID:(id)arg2;
- (bool)updateSKGProcessorAttributes:(id)arg1 record:(id)arg2 bundleID:(id)arg3 protectionClass:(id)arg4 isUpdate:(bool)arg5 processorFlags:(unsigned long long)arg6;
- (bool)updateSKGProcessorDocUnderstandingAttributes:(id)arg1 record:(id)arg2 bundleID:(id)arg3 protectionClass:(id)arg4 recordHasText:(bool)arg5 itemHasText:(bool)arg6 isUpdate:(bool)arg7;
- (bool)updateSKGProcessorKeyphrasesAttributes:(id)arg1 record:(id)arg2 bundleID:(id)arg3 protectionClass:(id)arg4 recordHasText:(bool)arg5 itemHasText:(bool)arg6 isUpdate:(bool)arg7;
- (bool)updateSKGReindexerAttributes:(id)arg1 record:(id)arg2 bundleID:(id)arg3 processorFlags:(unsigned long long)arg4;
- (bool)updateSKGReindexerDocUnderstandingAttributes:(id)arg1 record:(id)arg2 bundleID:(id)arg3 itemHasText:(bool)arg4;
- (bool)updateSKGReindexerKeyphrasesAttributes:(id)arg1 record:(id)arg2 bundleID:(id)arg3 itemHasText:(bool)arg4;

@end
