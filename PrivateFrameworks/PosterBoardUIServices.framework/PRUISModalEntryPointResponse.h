/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterBoardUIServices.framework/PosterBoardUIServices
 */

@interface PRUISModalEntryPointResponse : NSObject <BSXPCSecureCoding, NSCopying, NSObject> {
    long long  _entryPointResult;
    long long  _result;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long entryPointResult;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long result;
@property (readonly) Class superclass;

+ (id)cancel;
+ (id)done;
+ (bool)supportsBSXPCSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (long long)entryPointResult;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithEntryPointResult:(long long)arg1;
- (id)initWithResult:(long long)arg1;
- (long long)result;

@end