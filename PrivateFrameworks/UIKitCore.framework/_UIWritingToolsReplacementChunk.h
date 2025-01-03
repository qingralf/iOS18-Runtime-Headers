/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIWritingToolsReplacementChunk : NSObject {
    long long  _lengthDelta;
    long long  _originalEndIndex;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _originalRange;
    NSAttributedString * _replacement;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) long long lengthDelta;
@property (nonatomic, readonly) long long originalEndIndex;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } originalRange;
@property (nonatomic, readonly, copy) NSAttributedString *replacement;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (id)description;
- (id)initWithReplacementChunk:(id)arg1 originalRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 uuid:(id)arg3;
- (long long)lengthDelta;
- (long long)originalEndIndex;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })originalRange;
- (id)replacement;
- (id)uuid;

@end
