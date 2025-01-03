/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
 */

@interface PodcastsFoundation.TranscriptModelBuilder : NSObject <PFTTMLParserDelegate> {
    void currentParagraph;
    void currentSentence;
    void currentSpeakerID;
    void currentWord;
    void duration;
    void interval;
    void isParsingDescriptor;
    void isParsingSpeakerName;
    void lockedPhase;
    void numberOfOpenSpansSinceStartOfSentence;
    void numberOfOpenSpansSinceStartOfWord;
    void parsedParagraphs;
    void speakers;
}

- (void).cxx_destruct;
- (id)init;
- (void)parser:(id)arg1 didEndElementType:(long long)arg2;
- (void)parser:(id)arg1 didStartElementType:(long long)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;
- (void)parserDidStartDocument:(id)arg1;

@end
