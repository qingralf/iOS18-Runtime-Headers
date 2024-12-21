/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHParseTreeNode : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _inputRange;
    NSString * _name;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } inputRange;
@property (nonatomic, readonly, copy) NSString *name;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 inputRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })inputRange;
- (id)name;

@end