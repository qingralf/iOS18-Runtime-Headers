/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface ChatKit.QuickReplyContent : NSObject {
    void indicesForReply;
    void numReplies;
    void rowHeights;
    void rows;
    void size;
    void transcriptHeight;
}

@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *indicesForReply;
@property (nonatomic, readonly) long long numReplies;
@property (nonatomic, readonly) NSArray *rowHeights;
@property (nonatomic, readonly) NSArray *rows;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) NSArray *strings;
@property (nonatomic, readonly) double transcriptHeight;

- (void).cxx_destruct;
- (id)debugDescription;
- (long long)indexForReply:(id)arg1;
- (id)indicesForReply;
- (id)init;
- (id)initWithReplies:(id)arg1 maxWidth:(double)arg2 transcriptHeight:(double)arg3;
- (bool)isEqual:(id)arg1;
- (long long)numReplies;
- (id)rowHeights;
- (id)rows;
- (struct CGSize { double x1; double x2; })size;
- (id)strings;
- (double)transcriptHeight;

@end