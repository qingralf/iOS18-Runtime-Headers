/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextComposer.framework/TextComposer
 */

@interface TCTokenInfo : NSObject <NSCopying> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _enclosingRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    long long  _tokenId;
    NSString * _tokenText;
}

@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } enclosingRange;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } followingRange;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } precedingRange;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (readonly) long long tokenId;
@property (readonly, copy) NSString *tokenText;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })enclosingRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })followingRange;
- (unsigned long long)hash;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 enclosingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 tokenText:(id)arg3 tokenId:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })precedingRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (long long)tokenId;
- (id)tokenText;

@end