/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICDataCryptor : NSObject <DCDataCryptorDelegate, NSSecureCoding> {
    NSManagedObjectContext * _context;
    NSString * _objectIdentifier;
}

@property (nonatomic, retain) NSManagedObjectContext *context;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *objectIdentifier;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)context;
- (id)decryptData:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptData:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectIdentifier:(id)arg1;
- (id)initWithObjectIdentifier:(id)arg1 context:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)objectIdentifier;
- (void)setContext:(id)arg1;
- (void)setObjectIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (id)decryptEncryptedData:(id)arg1 identifier:(id)arg2;
- (id)encryptData:(id)arg1 identifier:(id)arg2;

@end