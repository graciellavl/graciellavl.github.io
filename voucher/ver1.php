<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ver 1</title>

    <link rel="preconnect" href="https://fonts.gstatic.com">
    <link rel="preconnect" href="https://fonts.gstatic.com">
    <link
        href="https://fonts.googleapis.com/css2?family=Barlow:ital,wght@0,100;0,200;0,300;0,400;0,500;0,600;0,700;0,800;0,900;1,100;1,200;1,300;1,400;1,500;1,600;1,700;1,800;1,900&display=swap"
        rel="stylesheet">
</head>

<style type="text/css">
    body {
        font-family: 'Barlow', sans-serif;
        margin: 0;
    }

    #left {
        width: 35%;
        padding: 0px 20px;
        color: #191e5e;
    }

    #right {
        width: 65%;
        color: white;
        margin-left: 120px;
        text-align: center;
        margin: auto;
    }

    a {
        text-decoration: none;
        color: white;
    }

    a:hover {
        text-decoration: underline;
    }
</style>

<body>
    <!-- Background Image -->
    <img src="./Asset-1/BG.svg" alt=""
        style="height: 100%; width: 100%; position: fixed; top: 0; left: 0; object-fit: cover; object-position: center; z-index: -1;" />
    <div style="color: white; font-size: 54px; font-weight: 900; position: absolute; top: 40px; right: 120px;"> <span id="num"><?= " [$num]"; ?></span>
    </div>
    <div style="display: flex; height: 100vh; align-items: center;">
        <section id="left">
            <div style="display: flex; margin-left: 20px; margin-bottom: 30px;">
                <img src="<?= $logo; ?>" alt="Logo" style="width: 90px; height: 90px;">
                <div style="font-size: 36px; align-self: center; font-weight: 900; ">BEDAS.net</div>
            </div>
            <div style="background-color: black; height: 280px; width: 300px; margin: auto;"></div>
            <div style="font-size: 54px; margin-left: 70px; color: black;"><?= $price; ?></div>
            <div style="margin-top: 40px; color: black; margin-left: 40px;">
                <div style="font-size: 28px;">Call Center</div>
                <div style="font-size: 36px;">0822-600-100-86</div>
            </div>
        </section>
        <section id="right">
            <div style="font-size: 96px; font-weight:900;">Kode Voucher</div>
            <div
                style="height: 80px; width: 540px; background-color: whitesmoke; border-radius: 20px; margin: 20px auto; color: #191e5e; font-weight: 900; font-size: 56px;">
                <?= $username; ?>
            </div>
            <div style="font-size: 37px; font-weight: 500;">
                <div><?= $validity; ?> <?= $timelimit; ?></div>
                <div>Login: <a href="http://bedas.id">http://bedas.id</a></div>
            </div>

        </section>
    </div>
</body>

</html>
