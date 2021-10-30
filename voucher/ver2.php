<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ver 2</title>

    <link rel="preconnect" href="https://fonts.gstatic.com">
    <link rel="preconnect" href="https://fonts.gstatic.com">
    <link
        href="https://fonts.googleapis.com/css2?family=Barlow:ital,wght@0,100;0,200;0,300;0,400;0,500;0,600;0,700;0,800;0,900;1,100;1,200;1,300;1,400;1,500;1,600;1,700;1,800;1,900&display=swap"
        rel="stylesheet">
</head>
<style>
    body {
        font-family: 'Barlow', sans-serif;
        margin: 0;
    }

    #right {
        width: 100vw;
        height: 100vh;
        color: white;
        margin-left: 120px;
        text-align: center;
        margin: auto;
    }

    a {
        text-decoration: none;
        color: #191e5e;
    }

    a:hover {
        text-decoration: underline;
    }
</style>

<body>
    <!-- Background Image -->
    <img src="./Asset-2/BG.svg" alt=""
        style="height: 100%; width: 100%; position: fixed; top: -40px; left: 0; object-fit: cover; z-index: -1;" />

    <div
        style="display: flex; position: absolute; top: 0px; left: 0px; background: white; padding: 20px; border-radius: 0 35px 35px 0;">
        <img src="<?= $logo; ?>" alt="Logo" style="width: 70px; height: 70px;">
        <div style="font-size: 36px; align-self: center; font-weight: 900; color: #191e5e;">BEDAS.net</div>
    </div>
    <div style="color: white; font-size: 54px; font-weight: 900; position: absolute; top: 40px; right: 120px;"> <span id="num"><?= " [$num]"; ?></span>
    </div>
    <section id="right" style="display: flex; flex-direction: column; justify-content: space-around; ">
        <div>
            <div style="font-size: 96px; font-weight:900;">Kode Voucher</div>
            <div
                style="height: 80px; width: 540px; background-color: whitesmoke; border-radius: 20px; margin: 20px auto; color: #191e5e; font-weight: 900; font-size: 56px;">
                <?= $username; ?>
            </div>
        </div>
        <div style="font-size: 37px; font-weight: 500; color: #191e5e; text-align: center; ">
            <div><?= $validity; ?> <?= $timelimit; ?></div>
            <div>Login: <a href="http://bedas.id">http://bedas.id</a></div>
        </div>
    </section>
    <div style="color: black; position: absolute; bottom: 20px; left: 20px;">
        <div style="font-size: 28px;">Call Center</div>
        <div style="font-size: 36px;">0822-600-100-86</div>
    </div>
    <div style="color: black; position: absolute; bottom: 20px; right: 20px;">
        <div style="font-size: 54px;"><?= $price; ?></div>
    </div>
</body>
</html>