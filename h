
[1mFrom:[0m /home/ubuntu/environment/sample_app/test/integration/users_signup_test.rb:29 UsersSignupTest#test_valid_signup_information:

    [1;34m16[0m: test [31m[1;31m"[0m[31mvalid signup information[1;31m"[0m[31m[0m [32mdo[0m
    [1;34m17[0m:   get signup_path
    [1;34m18[0m: 
    [1;34m19[0m:   assert_difference [31m[1;31m'[0m[31mUser.count[1;31m'[0m[31m[0m, [1;34m1[0m [32mdo[0m
    [1;34m20[0m:     post users_path, [35mparams[0m: { [35muser[0m: { [35mname[0m:  [31m[1;31m"[0m[31mExample User[1;31m"[0m[31m[0m,
    [1;34m21[0m:                                        [35memail[0m: [31m[1;31m"[0m[31muser@example.com[1;31m"[0m[31m[0m,
    [1;34m22[0m:                                        [35mpassword[0m:              [31m[1;31m"[0m[31mpassword[1;31m"[0m[31m[0m,
    [1;34m23[0m:                                        [35mpassword_confirmation[0m: [31m[1;31m"[0m[31mpassword[1;31m"[0m[31m[0m } }
    [1;34m24[0m:   [32mend[0m
    [1;34m25[0m: 
    [1;34m26[0m:   follow_redirect!
    [1;34m27[0m:   assert_template [31m[1;31m'[0m[31musers/show[1;31m'[0m[31m[0m
    [1;34m28[0m:   binding.pry
 => [1;34m29[0m:   assert flash.message
    [1;34m30[0m: [32mend[0m

